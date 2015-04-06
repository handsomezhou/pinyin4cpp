/*
 * Copyright  [handsomezhou & Li Min] 2015 Convert Chinese characters to Pinyin.
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

#include "ResourceHelper.h"

QHashIterator<QString, QString> ResourceHelper::loadProperties(QString resourcePath)
{
    QHash<QString, QString> *hash=new  QHash<QString, QString>();
    QHashIterator<QString, QString> hashIterator(*hash);//=new QHashIterator<QString, QString>();

    if((NULL==resourcePath)||(resourcePath.trimmed().isEmpty())){ /* nothing but whitespace */;
        return hashIterator;
    }

    QFile file(resourcePath);
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        return hashIterator;
    }

    qDebug(" File:%s, Line:%d, Function:%s", __FILE__, __LINE__ , __FUNCTION__);

    return hashIterator;
}
