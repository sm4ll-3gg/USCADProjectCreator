#ifndef COMBOBOXDELEGATE_H
#define COMBOBOXDELEGATE_H

#include <QItemDelegate>

class ComboBoxDelegate : public QItemDelegate
{
    Q_OBJECT
public:
    explicit ComboBoxDelegate(QAbstractListModel* model, QObject *parent = Q_NULLPTR);

protected:
    QWidget* createEditor(QWidget *parent, const QStyleOptionViewItem&,
                          const QModelIndex&) const override;

private:
    QAbstractListModel* model;
};

#endif // COMBOBOXDELEGATE_H
