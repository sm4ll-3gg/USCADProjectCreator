#include "abstractpage.h"

#include <QVBoxLayout>

AbstractPage::AbstractPage(const int columnCount, const QStringList& labels, QWidget *parent)
    : QWizardPage(parent), columnCount(columnCount), labels(labels)
{}

bool AbstractPage::validatePage()
{
    if(!isDataValid())
    {
        dataWgt->setErrorMessage("Данные не валидны или введены не полностью");
        return false;
    }

    dataWgt->resetErrorMessage();
    return true;
}

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

bool AbstractPage::isDataValid() const
{
    for(int i = 0; i < dataWgt->rowCount(); ++i)
    {
        for(int j = 0; j < dataWgt->columnCount(); ++j)
        {
            if(!dataWgt->data(i, j).isValid())
                return false;
        }
    }

    return true;
}
