#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QDebug>
#include "../pinyin4cpp/PinyinHelper.h"

#include "PinyinParseWidget.h"
PinyinParseWidget:: PinyinParseWidget(QWidget *parent):QDialog(parent)
{
    inputPromptLabel=new QLabel(tr("Input Chinese:"));
    inputStringEt=new QTextEdit;
    converBtn=new QPushButton(tr("Convert to Pinyin"));

    connect(inputStringEt,SIGNAL(textChanged()),this,SLOT(pinyinParse()));

    QHBoxLayout *inputLayout=new QHBoxLayout;
    inputLayout->addWidget(inputPromptLabel);
    inputLayout->addWidget(inputStringEt);

    QVBoxLayout *mainLayout=new QVBoxLayout;
    mainLayout->addLayout(inputLayout);
    mainLayout->addWidget(converBtn);

    setLayout(mainLayout);
}


void PinyinParseWidget::pinyinParse()
{
    QString inputString=inputStringEt->toPlainText();
    if(!inputString.isEmpty()){

        QChar ch=inputString.at(0);

       // qDebug()<<"["<<ch.unicode()<<"]";
        HanyuPinyinOutputFormat *outputFormat=new HanyuPinyinOutputFormat();
        QList<QString> *pinyinList=new QList<QString>();
        //PinyinHelper::toHanyuPinyinStringArray(ch,outputFormat,pinyinList);
        PinyinHelper::toHanyuPinyinStringArray(ch,outputFormat,pinyinList);
        QString pinyins;
        for(int k=0; k<pinyinList->size();k++){
            pinyins=pinyins+" "+pinyinList->at(k);
        }
       converBtn->setText(pinyins);
    }

    //PinyinHelper::toHanyuPinyinStringArray(inputString.at(0));
}
