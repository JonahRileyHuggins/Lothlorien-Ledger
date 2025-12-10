#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QKeyEvent>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = 0);
    ~Calculator();

private:
    Ui::Calculator *ui;
    QString lastButton;

private slots:
    void OperButtonPressed();
    void EqualButtonPressed();

protected:
    void OperButtonPressedFromKey(const QString &op);
    void keyPressEvent(QKeyEvent *event) override;
};
#endif // CALCULATOR_H
