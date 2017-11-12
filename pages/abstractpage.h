#ifndef ABSTACTPAGE_H
#define ABSTACTPAGE_H

#include "auxiliary_classes/datainputwidget.h"

#include <QJsonArray>
#include <QJsonObject>

#include <QWizardPage>

class AbstractPage : public QWizardPage
{
    Q_OBJECT
public:
    explicit AbstractPage(const int columnCount, const QStringList& labels,
                         QWidget *parent = Q_NULLPTR);

    QJsonArray  serialize() const;

protected slots:
    bool    validatePage() override;

protected: // Methods
    void    initUi(const QString& title, const QString& subtitle, const QString& description);

    bool    isDataValid() const;

private: // Methods
    virtual QJsonObject serializeObject(int row) const = 0;

protected:
    DataInputWidget*    dataWgt;

private:
    const int           columnCount;
    const QStringList   labels;
};

#endif // ABSTACTPAGE_H
