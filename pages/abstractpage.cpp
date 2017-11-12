#include "abstractpage.h"

#include <QVBoxLayout>

AbstractPage::AbstractPage(const int columnCount, const QStringList& labels, QWidget *parent)
    : QWizardPage(parent), columnCount(columnCount), labels(labels)
{}

void AbstractPage::initUi(const QString& title, const QString& subtitle, const QString& description)
{
    setTitle(title);
    setSubTitle(subtitle);

    dataWgt = new DataInputWidget(this);
    dataWgt->setDescription(description);

    dataWgt->setColumnCount(columnCount);
    dataWgt->setTableHeaders(labels);

    QVBoxLayout* layout = new QVBoxLayout{};
    layout->addWidget(dataWgt);

    setLayout(layout);
}
