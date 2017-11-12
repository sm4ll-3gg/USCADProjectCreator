#include "validatordelegate.h"

#include <QLineEdit>

ValidatorDelegate::ValidatorDelegate(QValidator* validator, QObject *parent)
    : QItemDelegate(parent), validator(validator)
{}

QWidget *ValidatorDelegate::createEditor(QWidget* parent, const QStyleOptionViewItem&,
                                         const QModelIndex&) const
{
    QLineEdit* editor = new QLineEdit(parent);
    editor->setValidator(validator);

    return editor;
}

