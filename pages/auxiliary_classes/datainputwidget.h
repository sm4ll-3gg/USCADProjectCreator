#ifndef DATAINPUTWIDGET_H
#define DATAINPUTWIDGET_H

#include <QWidget>
#include <QAbstractItemDelegate>

namespace Ui {
class DataInputWidget;
}

class DataInputWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DataInputWidget(QWidget *parent = 0);
    ~DataInputWidget();

    void    setDescription(const QString& text);

    void    setColumnCount(int count);
    void    setTableHeaders(const QStringList& headers);

    int     rowCount() const;
    int     columnCount() const;

    void    setDelegate(QAbstractItemDelegate* delegate);
    void    setDelegateForColumn(int column, QAbstractItemDelegate* delegate);

    void    setItemValidator(int row, int column, QValidator* validator);

    void    setErrorMessage(const QString& message);
    void    resetErrorMessage();

    bool    warnEmptyTable(const QString& message);

    QVariant    data(int row, int column) const;

private slots:
    void    appendRow();
    void    removeSelectedRows();

private:
    Ui::DataInputWidget *ui;
};

#endif // DATAINPUTWIDGET_H
