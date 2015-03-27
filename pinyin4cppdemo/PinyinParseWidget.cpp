#include <QHBoxLayout>
#include <QVBoxLayout>

#include "PinyinParseWidget.h"
PinyinParseWidget:: PinyinParseWidget(QWidget *parent):QDialog(parent)
{
    inputPromptLabel=new QLabel(tr("Input Chinese:"));
    inputStringEt=new QTextEdit;
    converBtn=new QPushButton(tr("Convert to Pinyin"));

    connect(inputStringEt,SIGNAL(textChanged(const QString &)),this,SLOT(pinyinParse(const QString &)));

    QHBoxLayout *inputLayout=new QHBoxLayout;
    inputLayout->addWidget(inputPromptLabel);
    inputLayout->addWidget(inputStringEt);

    QVBoxLayout *mainLayout=new QVBoxLayout;
    mainLayout->addLayout(inputLayout);
    mainLayout->addWidget(converBtn);

    setLayout(mainLayout);
}


void PinyinParseWidget::pinyinParse(const QString &text)
{
    converBtn->setText(text);
    inputPromptLabel->setText("test");
}
