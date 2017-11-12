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

    registerField("supports_count", this, "supportsCount");
}

void SupportsPage::initializePage()
{
    int nodeCount = field("node_count").toInt();
    QIntValidator* validator = new QIntValidator(1, nodeCount);

    dataWgt->setDelegateForColumn(0, new ValidatorDelegate(validator));
}

bool SupportsPage::validatePage()
{
    if(dataWgt->warnEmptyTable("Добавьте хотябы одну опору"))
        return false;

    supportsCount = dataWgt->rowCount();
    return AbstractPage::validatePage();
}
