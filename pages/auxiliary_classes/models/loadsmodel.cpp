#include "loadsmodel.h"

LoadsModel::LoadsModel(QObject *parent)
    : QAbstractListModel(parent)
{}

int LoadsModel::rowCount(const QModelIndex &parent) const
{
    // For list models only the root node (an invalid parent) should return the list's size. For all
    // other (valid) parents, rowCount() should return 0 so that it does not become a tree model.
    if (parent.isValid())
        return 0;

    return loads.size();
}

QVariant LoadsModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    Load load = loads.at(index.row());
    if(role == Qt::DisplayRole)
        return load.first;
    else if(role == Qt::UserRole)
        return load.second;

    return QVariant();
}
