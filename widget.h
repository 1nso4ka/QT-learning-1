#include <QWidget>
#include <QTextEdit>
#include <QPushButton>

class Notepad : public QWidget
{
    Q_OBJECT
public:
    Notepad();
private slots:
    void quit() {
        exit(0);
    }
private:
    QTextEdit* textEdit;
    QPushButton* quitButton;
};

