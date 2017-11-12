#include "comboboxdelegate.h"

#include <QComboBox>

ComboBoxDelegate::ComboBoxDelegate(QAbstractListModel* model, QObject *parent)
    : QItemDelegate(parent), model(model)
{}

QWidget *ComboBoxDelegate::createEditor(QWidget* parent, const QStyleOptionViewItem&,
                                        const QModelIndex&) const
{
    QComboBox* editor = new QComboBox(parent);
    editor->setModel(model);

    return editor;
}
