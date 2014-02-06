//
//  ServiceAppAppDelegate.h
//  ServiceApp
//
//  Created by Miguel Elvir on 06/02/14.
//  Copyright (c) 2014 kmco. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ServiceAppAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
