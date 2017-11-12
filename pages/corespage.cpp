#include "corespage.h"

#include "auxiliary_classes/delegates/validatordelegate.h"

CoresPage::CoresPage(QWidget *parent)
    : AbstractPage(3, QStringList{"NBegin", "NEnd", "Type"}, parent)
{
    initUi("Определение стержней конструкции",
           "Введите данные о необходимых стержнях конструкции в таблицу ниже",
           "NBegin и NEnd - номера узлов начала и конца стержня соответственно\n"
           "Type - номер типа стержня, определенный ранее");


    ValidatorDelegate* nodes = new ValidatorDelegate(new QIntValidator(1, 10)); // Nodes count
    dataWgt->setDelegateForColumn(0, nodes);
    dataWgt->setDelegateForColumn(1, nodes);
    dataWgt->setDelegateForColumn(2, new ValidatorDelegate(new QIntValidator{}));
}

CoresPage::~CoresPage()
{}
