#include "supportspage.h"

#include "auxiliary_classes/models/supportmodel.h"

#include "auxiliary_classes/delegates/validatordelegate.h"
#include "auxiliary_classes/delegates/comboboxdelegate.h"

#include <QVBoxLayout>

SupportsPage::SupportsPage(QWidget *parent)
    : AbstractPage(2, QStringList{"Node", "Type"}, parent)
{
    initUi("Определение опор конструкции",
           "Введите кинематические ограничения (опоры) для узлов конструкции",
           "Node - номер узла, к которому относится опора\n"
           "Type - тип опоры");

    dataWgt->setDelegateForColumn(1, new ComboBoxDelegate(new SupportModel{}));
    dataWgt->setDelegateForColumn(0, new ValidatorDelegate(new QIntValidator(0, 10)));
}
