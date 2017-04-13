//
//  AppDelegate.h
//  demoonly1
//
//  Created by Madhav on 13/04/17.
//  Copyright © 2017 Madhav. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

