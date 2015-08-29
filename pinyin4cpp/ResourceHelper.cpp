/*
 * Copyright 2015 handsomezhou & Li Min
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <QTextStream>
#include "ResourceHelper.h"

QHashIterator<QString, QString> ResourceHelper::loadProperties(QString resourcePath)
{
    QHash<QString, QString> *hash=new  QHash<QString, QString>();
    QHashIterator<QString, QString> hashIterator(*hash);//=new QHashIterator<QString, QString>();

    if((NULL==resourcePath)||(resourcePath.trimmed().isEmpty())){ /* nothing but whitespace */;
        return hashIterator;
    }

    QFile *pFile=new QFile(resourcePath);
    qDebug(" File:%s, Line:%d, Function:%s,resourcePath[%s]", __FILE__, __LINE__ , __FUNCTION__,qPrintable(resourcePath));
    if(!pFile->open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug(" File:%s, Line:%d, Function:%s", __FILE__, __LINE__ , __FUNCTION__);
        return hashIterator;
    }

    QTextStream in(pFile);
    while (!in.atEnd()) {
        QString line = in.readLine();
        // process_line(line);
        qDebug(" line:%s",qPrintable(line));
    }

    qDebug(" File:%s, Line:%d, Function:%s", __FILE__, __LINE__ , __FUNCTION__);

    return hashIterator;
}
