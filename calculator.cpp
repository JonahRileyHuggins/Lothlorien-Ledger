#include "calculator.h"
#include "ui_calculator.h"
#include "parser.h"

int NUMBUTTONS = 15; // Number of buttons, not including Enter symbol

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);

    setFocusPolicy(Qt::StrongFocus);
    setFocus();

    const char* buttons_list[15] ={
        "Button_0",
        "Button_1",
        "Button_2",
        "Button_3",
        "Button_4",
        "Button_5",
        "Button_6",
        "Button_7",
        "Button_8",
        "Button_9",
        "Divide",
        "Decimal",
        "Multiply",
        "Subtract",
        "Add"
    };
    QPushButton *buttonNames[15];
    for (int i = 0; i < NUMBUTTONS; ++i) {
        buttonNames[i]  = Calculator::findChild<QPushButton *>(buttons_list[i]);

        connect(buttonNames[i], SIGNAL(released()), this, SLOT(OperButtonPressed()));

    }

    // Set Equal Button as only with new function:
    QPushButton *enterButton = Calculator::findChild<QPushButton *>("Enter");
    connect(enterButton, SIGNAL(released()), this, SLOT(EqualButtonPressed()));
}

Calculator::~Calculator()
{
    delete ui;
}


void Calculator::OperButtonPressed(){

    if (this->lastButton == "Enter") ui->Display->setText("");

    QPushButton *button = (QPushButton *)sender();

    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    QString newVal = displayVal + butVal;
    ui->Display->setText(newVal);

    this->lastButton = butVal;
}

void Calculator::EqualButtonPressed(){

    // Holds new calculation
    double solution = 0.0;

    QString displayVal = ui->Display->text();

    solution = parser(displayVal.toStdString().c_str());

    ui->Display->setText(QString::number(solution));

    this->lastButton = "Enter";

}

void Calculator::OperButtonPressedFromKey(const QString &op) {
    if (lastButton == "Enter")
        ui->Display->clear();

    ui->Display->setText(ui->Display->text() + op);
    lastButton = op;
}

void Calculator::keyPressEvent(QKeyEvent *event)
{
    QString key = event->text();

    // Handle digits
    if (key >= "0" && key <= "9" || key == ".") {
        ui->Display->setText(ui->Display->text() + key);
        lastButton = key;
        return;
    }

    switch (event->key()) {

    case Qt::Key_Plus:
        OperButtonPressedFromKey("+");
        return;

    case Qt::Key_Minus:
        OperButtonPressedFromKey("-");
        return;

    case Qt::Key_Slash:
        OperButtonPressedFromKey("/");
        return;

    case Qt::Key_Asterisk:
        OperButtonPressedFromKey("*");
        return;

    case Qt::Key_Return:
    case Qt::Key_Enter:
        EqualButtonPressed();
        return;

    case Qt::Key_Backspace:
        ui->Display->backspace();
        return;

    case Qt::Key_Escape:
        ui->Display->clear();
        return;

    default:
        QWidget::keyPressEvent(event); // fallback
    }
}

