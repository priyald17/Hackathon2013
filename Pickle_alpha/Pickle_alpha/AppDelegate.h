//
//  AppDelegate.h
//  Pickle_alpha
//
//  Created by jarthur on 4/13/13.
//  Copyright (c) 2013 com.hack2013. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
}

@property (strong, nonatomic) UIWindow *window;

-(void)callOnLogin;

// the following methods get data from the current user

-(NSMutableArray*) getPickleMessages;

-(NSString*) getPickleIDForMessage:(NSString*)message;

-(NSMutableArray*) getGroupsForUser;

-(NSMutableArray*) getPickleesForGroupName:(NSString*)name;

-(NSMutableString*) getUsernameForCurrentUser;

-(NSMutableArray*) getFriendsNamesForCurrentUser;

-(NSMutableArray*) getFriendsIDForFriend:(NSString*)friendName;

// the following methods are able to be called by a user to edit groups, pickles, etc.

-(BOOL)createGroup:(NSString*)groupName;

-(BOOL)createPickleWithQuestion:(NSString*)message andBeginTime:(NSDate*)startTime andEndTime:(NSDate*)endTime;

-(BOOL)addSuggestedPlace:(NSString*)place forPickle:(NSString*)pickleID;

-(BOOL)addSuggestedTime:(NSDate*)date forPickle:(NSString*)pickleID;

-(BOOL)addFriend:(NSString*)friendName forPickle:(NSString*)pickleID;

// the following methods get data from a pickle. Note that each must be passed a pickle id.

-(NSString*)getPicklerIDForPickle:(NSString*)pickle;

-(NSMutableArray*)getPickleesNamesForPickle:(NSString*)pickle;

-(NSMutableArray*)getPickleesIDForPickle:(NSString*)pickle;

-(NSString*)getPickleMessageForID:(NSString*)pickle;

-(NSDate*)getBeginTimeRangeForPickle:(NSString*)pickle;

-(NSDate*)getEndTimeRangeForPickle:(NSString*)pickle;

// will be a vector of NSStrings.
-(NSMutableArray*)getSuggestedPlacesForPickle:(NSString*)pickle;

// will be a vector of NSDates.
-(NSMutableArray*)getSuggestedTimesForPickle:(NSString*)pickle;


@end
