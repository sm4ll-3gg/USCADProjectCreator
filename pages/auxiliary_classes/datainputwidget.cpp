#include "datainputwidget.h"
#include "ui_datainputwidget.h"

#include <QDebug>
#include <QLineEdit>

DataInputWidget::DataInputWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataInputWidget)
{
    ui->setupUi(this);

    ui->table->setRowCount(1);
    setColumnCount(2);

    ui->errorLabel->hide();
}

DataInputWidget::~DataInputWidget()
{
    delete ui;
}

void DataInputWidget::setDescription(const QString &text)
{
    ui->description->setText(text);
}

void DataInputWidget::setColumnCount(int count)
{
    ui->table->setColumnCount(count);

    QHeaderView* header = ui->table->horizontalHeader();

    int width = ui->table->rowCount() == 0 ? 0 : 14; // for vertical header;
    for(int i = 0; i < ui->table->columnCount(); ++i)
        width += header->sectionSize(i);

    ui->table->setFixedWidth(width);
}

void DataInputWidget::setTableHeaders(const QStringList &headers)
{
    ui->table->setHorizontalHeaderLabels(headers);
}

int DataInputWidget::rowCount() const
{
    return ui->table->rowCount();
}

int DataInputWidget::columnCount() const
{
    return ui->table->columnCount();
}

void DataInputWidget::setDelegate(QAbstractItemDelegate *delegate)
{
    ui->table->setItemDelegate(delegate);
}

void DataInputWidget::setDelegateForColumn(int column, QAbstractItemDelegate *delegate)
{
    ui->table->setItemDelegateForColumn(column, delegate);
}

void DataInputWidget::setItemValidator(int row, int column, QValidator *validator)
{
    QLineEdit* editor = qobject_cast<QLineEdit*> (ui->table->cellWidget(row, column));

    if(!editor)
        return;

    editor->setValidator(validator);
}

void DataInputWidget::setErrorMessage(const QString &message)
{
    ui->errorLabel->setText(message);
    ui->errorLabel->show();
}

void DataInputWidget::resetErrorMessage()
{
    ui->errorLabel->setText("");
    ui->errorLabel->hide();
}

bool DataInputWidget::warnEmptyTable(const QString &message)
{
    if(ui->table->rowCount() != 0)
        return false;

    setErrorMessage(message);
    return true;
}

QVariant DataInputWidget::data(int row, int column) const
{
    return ui->table->model()->index(row, column).data();
}

void DataInputWidget::appendRow()
{
    ui->table->insertRow(ui->table->rowCount());
}

void DataInputWidget::removeSelectedRows()
{
    QVector<int> selectedRows{};

    QModelIndexList selectedIndexes = ui->table->selectionModel()->selectedRows();
    for(QModelIndex index : selectedIndexes)
        selectedRows.append(index.row());

    std::sort(selectedRows.begin(), selectedRows.end());

    int offset = 0;
    for(int row : selectedRows)
        ui->table->removeRow(row - offset++);
}
