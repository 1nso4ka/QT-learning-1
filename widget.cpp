#include "widget.h"
#include <QVBoxLayout>

Notepad::Notepad()
{
    textEdit = new QTextEdit;
    quitButton = new QPushButton(tr("Quit"), this);

    connect(quitButton, SIGNAL(clicked()), this, SLOT(quit()));

    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(textEdit);
    layout->addWidget(quitButton);

    setLayout(layout);

    setWindowTitle(tr("Notepad"));
}


