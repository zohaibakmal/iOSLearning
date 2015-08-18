//
//  ToDoItem.h
//  ToDoList
//
//  Created by Akmal, Mohammad Zohaib on 8/18/15.
//  Copyright (c) 2015 zohaib. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
