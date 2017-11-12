#ifndef SUPPORTMODEL_H
#define SUPPORTMODEL_H

#include <declarations.h>

#include <QAbstractListModel>

class SupportModel : public QAbstractListModel
{
    Q_OBJECT

    using Type = PrDeclarations::SupportType;

    using Support = QPair<QString, Type>;
    using Supports = QVector<Support>;

public:
    explicit SupportModel(QObject *parent = nullptr);

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    const Supports supports{Support("111", Type::S111), Support("110", Type::S110),
                Support("101", Type::S101), Support("100", Type::S100), Support("011", Type::S011),
                Support("010", Type::S010), Support("001", Type::S001)};
};

#endif // SUPPORTMODEL_H
