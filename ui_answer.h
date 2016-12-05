/********************************************************************************
** Form generated from reading UI file 'answer.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANSWER_H
#define UI_ANSWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <qvideowidget.h>

QT_BEGIN_NAMESPACE

class Ui_Answer
{
public:
    QPushButton *buttonRight;
    QPushButton *buttonEnd;
    QPushButton *buttonWrong;
    QLabel *answer;
    QLabel *currentPlayer;
    QPushButton *buttonCancel;
    QGraphicsView *graphicsView;
    QVideoWidget *videoPlayer;
    QLabel *time;

    void setupUi(QDialog *Answer)
    {
        if (Answer->objectName().isEmpty())
            Answer->setObjectName(QStringLiteral("Answer"));
        Answer->resize(998, 615);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Answer->sizePolicy().hasHeightForWidth());
        Answer->setSizePolicy(sizePolicy);
        Answer->setMinimumSize(QSize(998, 615));
        Answer->setMaximumSize(QSize(998, 615));
        Answer->setCursor(QCursor(Qt::WhatsThisCursor));
        Answer->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral("Initialize"), QSize(), QIcon::Normal, QIcon::Off);
        Answer->setWindowIcon(icon);
        buttonRight = new QPushButton(Answer);
        buttonRight->setObjectName(QStringLiteral("buttonRight"));
        buttonRight->setGeometry(QRect(690, 570, 85, 32));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonRight->sizePolicy().hasHeightForWidth());
        buttonRight->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QStringLiteral("Andale Mono"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        buttonRight->setFont(font);
        buttonRight->setCursor(QCursor(Qt::WhatsThisCursor));
        buttonEnd = new QPushButton(Answer);
        buttonEnd->setObjectName(QStringLiteral("buttonEnd"));
        buttonEnd->setGeometry(QRect(10, 570, 85, 32));
        sizePolicy1.setHeightForWidth(buttonEnd->sizePolicy().hasHeightForWidth());
        buttonEnd->setSizePolicy(sizePolicy1);
        buttonEnd->setFont(font);
        buttonEnd->setCursor(QCursor(Qt::WhatsThisCursor));
        buttonWrong = new QPushButton(Answer);
        buttonWrong->setObjectName(QStringLiteral("buttonWrong"));
        buttonWrong->setGeometry(QRect(800, 570, 85, 32));
        sizePolicy1.setHeightForWidth(buttonWrong->sizePolicy().hasHeightForWidth());
        buttonWrong->setSizePolicy(sizePolicy1);
        buttonWrong->setFont(font);
        buttonWrong->setCursor(QCursor(Qt::WhatsThisCursor));
        answer = new QLabel(Answer);
        answer->setObjectName(QStringLiteral("answer"));
        answer->setGeometry(QRect(9, 9, 981, 521));
        sizePolicy1.setHeightForWidth(answer->sizePolicy().hasHeightForWidth());
        answer->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Andale Mono"));
        font1.setPointSize(28);
        font1.setBold(false);
        font1.setWeight(50);
        answer->setFont(font1);
        answer->setCursor(QCursor(Qt::WhatsThisCursor));
        answer->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        answer->setTextFormat(Qt::RichText);
        answer->setScaledContents(false);
        answer->setAlignment(Qt::AlignCenter);
        answer->setWordWrap(true);
        currentPlayer = new QLabel(Answer);
        currentPlayer->setObjectName(QStringLiteral("currentPlayer"));
        currentPlayer->setGeometry(QRect(740, 530, 208, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Andale Mono"));
        font2.setPointSize(20);
        currentPlayer->setFont(font2);
        currentPlayer->setCursor(QCursor(Qt::WhatsThisCursor));
        currentPlayer->setAlignment(Qt::AlignCenter);
        buttonCancel = new QPushButton(Answer);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        buttonCancel->setGeometry(QRect(910, 570, 85, 32));
        sizePolicy1.setHeightForWidth(buttonCancel->sizePolicy().hasHeightForWidth());
        buttonCancel->setSizePolicy(sizePolicy1);
        buttonCancel->setFont(font);
        buttonCancel->setCursor(QCursor(Qt::WhatsThisCursor));
        graphicsView = new QGraphicsView(Answer);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(1, 1, 997, 531));
        graphicsView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::WhatsThisCursor)));
        videoPlayer = new QVideoWidget(Answer);
        videoPlayer->setObjectName(QStringLiteral("videoPlayer"));
        videoPlayer->setGeometry(QRect(9, 9, 981, 511));
        videoPlayer->setCursor(QCursor(Qt::WhatsThisCursor));
        videoPlayer->setStyleSheet(QStringLiteral(""));
        time = new QLabel(Answer);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(20, 540, 221, 16));
        QFont font3;
        font3.setPointSize(14);
        time->setFont(font3);

        retranslateUi(Answer);

        QMetaObject::connectSlotsByName(Answer);
    } // setupUi

    void retranslateUi(QDialog *Answer)
    {
        Answer->setWindowTitle(QApplication::translate("Answer", "Jeopardy", 0));
        buttonRight->setText(QApplication::translate("Answer", "Right", 0));
        buttonEnd->setText(QApplication::translate("Answer", "End", 0));
        buttonWrong->setText(QApplication::translate("Answer", "Wrong", 0));
        answer->setText(QApplication::translate("Answer", "listen...", 0));
        currentPlayer->setText(QApplication::translate("Answer", "currentPlayer", 0));
        buttonCancel->setText(QApplication::translate("Answer", "Cancel", 0));
        time->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Answer: public Ui_Answer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANSWER_H
