#include "supportmodel.h"

SupportModel::SupportModel(QObject *parent)
    : QAbstractListModel(parent)
{}

int SupportModel::rowCount(const QModelIndex &parent) const
{
    // For list models only the root node (an invalid parent) should return the list's size. For all
    // other (valid) parents, rowCount() should return 0 so that it does not become a tree model.
    if (parent.isValid())
        return 0;

    return supports.size();
}

QVariant SupportModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    const Support supp = supports.at(index.row());

    if(role == Qt::DisplayRole)
        return supp.first;
    else if(role == Qt::UserRole)
        return supp.second;

    return QVariant();
}
