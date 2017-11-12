#ifndef NODESPAGE_H
#define NODESPAGE_H

#include "abstractpage.h"

class NodesPage : public AbstractPage
{
    Q_OBJECT

    Q_PROPERTY(int nodeCount MEMBER nodeCount)

public:
    explicit NodesPage(QWidget *parent = 0);
    ~NodesPage();

public slots:
    bool    validatePage() override;

private:
    int nodeCount{0};
};

#endif // NODESPAGE_H
