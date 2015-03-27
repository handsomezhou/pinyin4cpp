#ifndef PINYINPARSEWIDGET_H
#define PINYINPARSEWIDGET_H

#include <QDialog>
#include <QLabel>
#include <QTextEdit>
#include <QPushButton>

class PinyinParseWidget:public QDialog
{
    Q_OBJECT
public:
    PinyinParseWidget(QWidget *parent=0);
private slots:
    void pinyinParse(const QString &text);
private:
    QLabel *inputPromptLabel;
    QTextEdit *inputStringEt;
    QPushButton *converBtn;
};

#endif // PINYINPARSEWIDGET_H
