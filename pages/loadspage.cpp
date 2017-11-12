#include "loadspage.h"

#include "auxiliary_classes/models/loadsmodel.h"

#include "auxiliary_classes/delegates/comboboxdelegate.h"
#include "auxiliary_classes/delegates/validatordelegate.h"

LoadsPage::LoadsPage(QWidget *parent) :
    AbstractPage(3, QStringList{"Index", "Type", "Value"}, parent)
{
    initUi("Определение нагрузок",
           "Введите данные о нагрузках",
           "Index - номер узла(если нагрузка сосредоточенная) или "
           "стержня(если нагрузка распределенная), к которому приложена нагрузка\n"
           "Type - тип нагрузки\n"
           "Value - значение нагрузки");

    dataWgt->setDelegateForColumn(0, new ValidatorDelegate(new QIntValidator{}));

    ComboBoxDelegate* delegate = new ComboBoxDelegate(new LoadsModel{});
    connect(delegate, &ComboBoxDelegate::sgStateChanged, this, &LoadsPage::cbStateChanged);

    dataWgt->setDelegateForColumn(1, delegate);

    dataWgt->setDelegateForColumn(2, new ValidatorDelegate(new QDoubleValidator{}));
}

bool LoadsPage::validatePage()
{
    if(dataWgt->warnEmptyTable("Добавьте хотябы одну нагрузку"))
        return false;

    return AbstractPage::validatePage();
}

QJsonObject LoadsPage::serializeObject(int row) const
{
    QJsonObject obj{};

    obj.insert("index", dataWgt->data(row, 0).toInt());
    obj.insert("type", dataWgt->data(row, 1).toInt());
    obj.insert("value", dataWgt->data(row, 2).toDouble());

    return obj;
}

void LoadsPage::cbStateChanged(int row, int state)
{
    QIntValidator* validator = new QIntValidator{};

    int max = 0;
    if(state == PrDeclarations::CONCENTRATED)
        max = field("node_count").toInt();
    else if(state == PrDeclarations::DISTRIBUTED)
        max = field("corse_count").toInt();

    validator->setRange(1, max);
    dataWgt->setItemValidator(row, 0, validator);
}
