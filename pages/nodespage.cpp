#include "nodespage.h"

#include "auxiliary_classes/delegates/validatordelegate.h"

#include <QVBoxLayout>
#include <QDebug>

NodesPage::NodesPage(QWidget *parent)
    : AbstractPage(2, QStringList{"X", "Y"}, parent)
{
    initUi("Определение узлов конструкции",
           "Введите данные о необходимых узлах",
           "Х и У - координаты узла на плоскости");

    dataWgt->setDelegate(new ValidatorDelegate(new QIntValidator{}));

    registerField("node_count", this, "nodeCount");
}

NodesPage::~NodesPage()
{}

bool NodesPage::validatePage()
{
    nodeCount = dataWgt->rowCount();
    if(nodeCount == 0)
    {
        dataWgt->setErrorMessage("Добавьте хотябы один узел");
        return false;
    }

    return true;
}
