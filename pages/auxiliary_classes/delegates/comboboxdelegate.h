#ifndef COMBOBOXDELEGATE_H
#define COMBOBOXDELEGATE_H

#include "declarations.h"

#include <QItemDelegate>

class ComboBoxDelegate : public QItemDelegate
{
    Q_OBJECT
public:
    explicit ComboBoxDelegate(QAbstractListModel* model, QObject *parent = Q_NULLPTR);

signals:
    void    sgStateChanged(int row, int state);

protected:
    QWidget* createEditor(QWidget *parent, const QStyleOptionViewItem&,
                          const QModelIndex& index) const override;

private:
    QAbstractListModel* model;
};

#endif // COMBOBOXDELEGATE_H
