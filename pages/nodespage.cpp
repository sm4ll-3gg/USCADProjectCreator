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

    dataWgt->setDelegate(new ValidatorDelegate(new QDoubleValidator{}));

    registerField("node_count", this, "nodeCount");
}

bool NodesPage::validatePage()
{
    if(dataWgt->warnEmptyTable("Добавьте хотябы один узел"))
        return false;

    nodeCount = dataWgt->rowCount();
    return AbstractPage::validatePage();
}

QJsonObject NodesPage::serializeObject(int row) const
{
    QJsonObject obj{};

    obj.insert("index", row);
    obj.insert("x", dataWgt->data(row, 0).toDouble());
    obj.insert("y", dataWgt->data(row, 1).toDouble());

    return obj;
}
