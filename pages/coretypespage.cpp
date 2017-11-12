#include "coretypespage.h"

#include "auxiliary_classes/delegates/validatordelegate.h"

#include <QVBoxLayout>

CoreTypesPage::CoreTypesPage(QWidget *parent) :
    AbstractPage(3, QStringList{"E", "A", "S"}, parent)
{
    initUi("Определение типов стержней конструкции",
           "Введите данные о необходимых типах стержней конструкции",
           "E - модуль упругости\n"
           "A - площадь сечения\n"
           "S -допускаемое напряжение");

    dataWgt->setDelegate(new ValidatorDelegate(new QDoubleValidator{}));

    registerField("core_types_count", this, "coreTypesCount");
}

bool CoreTypesPage::validatePage()
{
    if(dataWgt->warnEmptyTable("Добавьте хотябы один тип стержня"))
        return false;

    coreTypesCount = dataWgt->rowCount();
    return AbstractPage::validatePage();
}

QJsonObject CoreTypesPage::serializeObject(int row) const
{
    QJsonObject obj{};

    obj.insert("index", row);
    obj.insert("e", dataWgt->data(row, 0).toDouble());
    obj.insert("a", dataWgt->data(row, 1).toDouble());
    obj.insert("s", dataWgt->data(row, 2).toDouble());

    return obj;
}
