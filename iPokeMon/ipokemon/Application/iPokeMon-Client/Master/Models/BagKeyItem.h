//
//  BagKeyItem.h
//  iPokeMon
//
//  Created by Kaijie Yu on 3/17/12.
//  Copyright (c) 2012 Kjuly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface BagKeyItem : NSManagedObject

@property (nonatomic, strong) NSNumber * code;
@property (nonatomic, strong) id icon;
@property (nonatomic, strong) NSNumber * sid;
@property (nonatomic, strong) NSNumber * type;
@property (nonatomic, strong) id location;

@end
