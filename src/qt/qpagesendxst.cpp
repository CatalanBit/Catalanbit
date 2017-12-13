#include "qpagesendxst.h"

QPageSendCAT::QPageSendCAT(QWidget *parent) :
    QStealthPage(parent)
{
    sendCoinsPage = new SendCoinsDialog(this);
    sendCoinsPage->setGeometry(0, 0, SC_PAGE_WIDTH, SC_PAGE_HEIGHT);
    sendCoinsPage->showNormal();
}

void QPageSendCAT::setModel(WalletModel *model)
{
    sendCoinsPage->setModel(model);
}

void QPageSendCAT::showOutOfSyncWarning(bool fShow)
{
    sendCoinsPage->showOutOfSyncWarning(fShow);
}

