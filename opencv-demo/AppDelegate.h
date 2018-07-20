//
//  AppDelegate.h
//  opencv-demo
//
//  Created by shujucn on 2018/7/20.
//  Copyright © 2018 shuju. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

