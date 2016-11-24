//
//  JKAssets.h
//  JKImagePicker
//
//  Created by Jecky on 15/1/13.
//  Copyright (c) 2015年 Jecky. All rights reserved.
//


/**
 *  选中的照片  对象
 */

#import <Foundation/Foundation.h>

@interface JKAssets : NSObject<NSCoding>

@property (nonatomic, strong) NSString  *groupPropertyID;
@property (nonatomic, strong) NSURL     *groupPropertyURL;
@property (nonatomic, strong) NSURL     *assetPropertyURL;
@end
