/********************************************************************************
** Form generated from reading UI file 'answer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include "qvideowidget.h"

QT_BEGIN_NAMESPACE

class Ui_Answer
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QLabel *answer;
    QVideoWidget *videoPlayer;
    QGridLayout *gridLayout;
    QLabel *time;
    QLabel *currentPlayer;
    QPushButton *buttonEnd;
    QPushButton *buttonRight;
    QPushButton *buttonWrong;
    QPushButton *buttonCancel;

    void setupUi(QDialog *Answer)
    {
        if (Answer->objectName().isEmpty())
            Answer->setObjectName(QStringLiteral("Answer"));
        Answer->resize(998, 615);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Answer->sizePolicy().hasHeightForWidth());
        Answer->setSizePolicy(sizePolicy);
        Answer->setMinimumSize(QSize(998, 615));
        Answer->setCursor(QCursor(Qt::WhatsThisCursor));
        Answer->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral("Initialize"), QSize(), QIcon::Normal, QIcon::Off);
        Answer->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(Answer);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsView = new QGraphicsView(Answer);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::WhatsThisCursor)));

        verticalLayout->addWidget(graphicsView);

        answer = new QLabel(Answer);
        answer->setObjectName(QStringLiteral("answer"));
        sizePolicy.setHeightForWidth(answer->sizePolicy().hasHeightForWidth());
        answer->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Andale Mono"));
        font.setPointSize(28);
        font.setBold(false);
        font.setWeight(50);
        answer->setFont(font);
        answer->setCursor(QCursor(Qt::WhatsThisCursor));
        answer->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        answer->setTextFormat(Qt::RichText);
        answer->setScaledContents(false);
        answer->setAlignment(Qt::AlignCenter);
        answer->setWordWrap(true);

        verticalLayout->addWidget(answer);

        videoPlayer = new QVideoWidget(Answer);
        videoPlayer->setObjectName(QStringLiteral("videoPlayer"));
        videoPlayer->setCursor(QCursor(Qt::WhatsThisCursor));
        videoPlayer->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(videoPlayer);


        verticalLayout_2->addLayout(verticalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        time = new QLabel(Answer);
        time->setObjectName(QStringLiteral("time"));
        QFont font1;
        font1.setPointSize(14);
        time->setFont(font1);

        gridLayout->addWidget(time, 0, 0, 1, 1);

        currentPlayer = new QLabel(Answer);
        currentPlayer->setObjectName(QStringLiteral("currentPlayer"));
        QFont font2;
        font2.setFamily(QStringLiteral("Andale Mono"));
        font2.setPointSize(20);
        currentPlayer->setFont(font2);
        currentPlayer->setCursor(QCursor(Qt::WhatsThisCursor));
        currentPlayer->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(currentPlayer, 0, 1, 1, 2);

        buttonEnd = new QPushButton(Answer);
        buttonEnd->setObjectName(QStringLiteral("buttonEnd"));
        sizePolicy.setHeightForWidth(buttonEnd->sizePolicy().hasHeightForWidth());
        buttonEnd->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QStringLiteral("Andale Mono"));
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setWeight(50);
        buttonEnd->setFont(font3);
        buttonEnd->setCursor(QCursor(Qt::WhatsThisCursor));

        gridLayout->addWidget(buttonEnd, 1, 0, 1, 1);

        buttonRight = new QPushButton(Answer);
        buttonRight->setObjectName(QStringLiteral("buttonRight"));
        sizePolicy.setHeightForWidth(buttonRight->sizePolicy().hasHeightForWidth());
        buttonRight->setSizePolicy(sizePolicy);
        buttonRight->setFont(font3);
        buttonRight->setCursor(QCursor(Qt::WhatsThisCursor));

        gridLayout->addWidget(buttonRight, 1, 1, 1, 1);

        buttonWrong = new QPushButton(Answer);
        buttonWrong->setObjectName(QStringLiteral("buttonWrong"));
        sizePolicy.setHeightForWidth(buttonWrong->sizePolicy().hasHeightForWidth());
        buttonWrong->setSizePolicy(sizePolicy);
        buttonWrong->setFont(font3);
        buttonWrong->setCursor(QCursor(Qt::WhatsThisCursor));

        gridLayout->addWidget(buttonWrong, 1, 2, 1, 1);

        buttonCancel = new QPushButton(Answer);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        sizePolicy.setHeightForWidth(buttonCancel->sizePolicy().hasHeightForWidth());
        buttonCancel->setSizePolicy(sizePolicy);
        buttonCancel->setFont(font3);
        buttonCancel->setCursor(QCursor(Qt::WhatsThisCursor));

        gridLayout->addWidget(buttonCancel, 1, 3, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);
        gridLayout->setColumnStretch(3, 1);
        gridLayout->setColumnMinimumWidth(0, 1);
        gridLayout->setColumnMinimumWidth(1, 1);
        gridLayout->setColumnMinimumWidth(2, 1);
        gridLayout->setColumnMinimumWidth(3, 1);
        gridLayout->setRowMinimumHeight(0, 1);
        gridLayout->setRowMinimumHeight(1, 1);

        verticalLayout_2->addLayout(gridLayout);

        verticalLayout_2->setStretch(0, 2);

        retranslateUi(Answer);

        QMetaObject::connectSlotsByName(Answer);
    } // setupUi

    void retranslateUi(QDialog *Answer)
    {
        Answer->setWindowTitle(QApplication::translate("Answer", "Jeopardy", Q_NULLPTR));
        answer->setText(QApplication::translate("Answer", "listen...", Q_NULLPTR));
        time->setText(QString());
        currentPlayer->setText(QApplication::translate("Answer", "currentPlayer", Q_NULLPTR));
        buttonEnd->setText(QApplication::translate("Answer", "End", Q_NULLPTR));
        buttonRight->setText(QApplication::translate("Answer", "Right", Q_NULLPTR));
        buttonWrong->setText(QApplication::translate("Answer", "Wrong", Q_NULLPTR));
        buttonCancel->setText(QApplication::translate("Answer", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Answer: public Ui_Answer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANSWER_H
