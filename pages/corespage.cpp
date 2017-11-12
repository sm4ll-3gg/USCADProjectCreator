#include "corespage.h"

#include "auxiliary_classes/delegates/validatordelegate.h"

CoresPage::CoresPage(QWidget *parent)
    : AbstractPage(3, QStringList{"NBegin", "NEnd", "Type"}, parent)
{
    initUi("Определение стержней конструкции",
           "Введите данные о необходимых стержнях конструкции в таблицу ниже",
           "NBegin и NEnd - номера узлов начала и конца стержня соответственно\n"
           "Type - номер типа стержня, определенный ранее");

    registerField("cores_count", this, "coresCount");
}

void CoresPage::initializePage()
{
    int nodesCount = field("node_count").toInt();
    QIntValidator* nodesValidator = new QIntValidator(1, nodesCount);
    ValidatorDelegate* nodes = new ValidatorDelegate(nodesValidator);

    dataWgt->setDelegateForColumn(0, nodes);
    dataWgt->setDelegateForColumn(1, nodes);

    int coreTypesCount = field("core_types_count").toInt();
    QIntValidator* ctv = new QIntValidator(1, coreTypesCount);

    dataWgt->setDelegateForColumn(2, new ValidatorDelegate(ctv));
}

bool CoresPage::validatePage()
{
    if(dataWgt->warnEmptyTable("Добавьте хотябы один стержень"))
        return false;

    coresCount = dataWgt->rowCount();
    return AbstractPage::validatePage();
}
