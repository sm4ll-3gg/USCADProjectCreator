#include "loadspage.h"

#include "auxiliary_classes/models/loadsmodel.h"

#include "auxiliary_classes/delegates/comboboxdelegate.h"
#include "auxiliary_classes/delegates/validatordelegate.h"

LoadsPage::LoadsPage(QWidget *parent) :
    AbstractPage(2, QStringList{"Index", "Type"}, parent)
{
    initUi("Определение нагрузок",
           "Введите данные о нагрузках",
           "Index - номер узла(если нагрузка сосредоточенная) или "
           "стержня(если нагрузка распределенная), к которому приложена нагрузка"
           "\nType - тип нагрузки");

    dataWgt->setDelegateForColumn(0, new ValidatorDelegate(new QIntValidator(0, 10)));
    dataWgt->setDelegateForColumn(1, new ComboBoxDelegate(new LoadsModel{}));
}
