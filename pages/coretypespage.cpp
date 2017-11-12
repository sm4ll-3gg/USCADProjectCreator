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
