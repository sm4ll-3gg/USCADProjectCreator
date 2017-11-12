#ifndef LOADSMODEL_H
#define LOADSMODEL_H

#include "declarations.h"

#include <QAbstractListModel>

class LoadsModel : public QAbstractListModel
{
    Q_OBJECT

    using Type = PrDeclarations::LoadType;

    using Load = QPair<QString, Type>;
    using Loads = QVector<Load>;

public:
    explicit LoadsModel(QObject *parent = nullptr);

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    const Loads loads{Load("Сосредоточенная", Type::CONCENTRATED),
                      Load("Распределенная",  Type::DISTRIBUTED)};
};

#endif // LOADSMODEL_H
