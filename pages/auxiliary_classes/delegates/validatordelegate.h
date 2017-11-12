#ifndef VALIDATORDELEGATE_H
#define VALIDATORDELEGATE_H

#include <QItemDelegate>

class ValidatorDelegate : public QItemDelegate
{
    Q_OBJECT
public:
    explicit ValidatorDelegate(QValidator* validator, QObject *parent = Q_NULLPTR);

    QWidget* createEditor(QWidget *parent, const QStyleOptionViewItem&,
                          const QModelIndex&) const override;

private:
    QValidator* validator;
};

#endif // VALIDATORDELEGATE_H
