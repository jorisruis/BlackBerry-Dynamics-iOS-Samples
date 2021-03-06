/* Copyright (c) 2018 BlackBerry Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#import <UIKit/UIKit.h>
#import "CustomTableViewCell.h"
#import "AppDelegate.h"
#import "CommonVC.h"
#import <GD/GDFileManager.h>
#import <GD/sqlite3enc.h>

const char* const SQL_CR_TABLE = "CREATE TABLE IF NOT EXISTS Notes(id INTEGER, title varchar(255), detail varchar(255));";

const char* const SQL_ACCESS_DATA = "SELECT * FROM Notes;";

@interface SecureSQLVC : UIViewController<UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UITextViewDelegate> {
    NSMutableArray *dataArray;
    NSManagedObjectContext *coreDataContext;
    sqlite3* sqlite3Database;
}

@property id <reloadTable> tableDelegate;

@end
