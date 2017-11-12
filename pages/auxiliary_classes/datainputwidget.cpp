#include "datainputwidget.h"
#include "ui_datainputwidget.h"

#include <QDebug>

DataInputWidget::DataInputWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataInputWidget)
{
    ui->setupUi(this);

    setColumnCount(2);
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
    if(headers.size() != ui->table->columnCount())
        return;

    QHeaderView* hv = ui->table->horizontalHeader();
    for(int i = 0; i < headers.size(); ++i)
        hv->model()->setHeaderData(i, Qt::Horizontal, headers.at(i));
}

void DataInputWidget::setDelegate(QAbstractItemDelegate *delegate)
{
    ui->table->setItemDelegate(delegate);
}

void DataInputWidget::setDelegateForColumn(int column, QAbstractItemDelegate *delegate)
{
    ui->table->setItemDelegateForColumn(column, delegate);
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
