#include "comboboxdelegate.h"

#include <QComboBox>

ComboBoxDelegate::ComboBoxDelegate(QAbstractListModel* model, QObject *parent)
    : QItemDelegate(parent), model(model)
{}

QWidget *ComboBoxDelegate::createEditor(QWidget* parent, const QStyleOptionViewItem&,
                                        const QModelIndex& index) const
{
    QComboBox* editor = new QComboBox(parent);

//    connect(editor, &QComboBox::currentIndexChanged, [=] (int state) {
//        emit sgStateChanged(index.row(), state);
//    });

    editor->setModel(model);

    return editor;
}
