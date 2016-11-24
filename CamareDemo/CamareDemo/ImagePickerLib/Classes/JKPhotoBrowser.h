//
//  JKPhotoBrowser.h
//  JKPhotoBrowser
//
//  Created by Jecky on 14/12/29.
//  Copyright (c) 2014年 Jecky. All rights reserved.
//


/**
 *  点击"预览"之后，弹出来的可左右滑动的视图(CollectionView)
 */

#import <UIKit/UIKit.h>
#import "JKImagePickerController.h"

@class JKPhotoBrowser;

@protocol JKPhotoBrowserDelegate <NSObject>
@optional
- (void)photoBrowser:(JKPhotoBrowser *)photoBrowser didSelectAtIndex:(NSInteger)index;
- (void)photoBrowser:(JKPhotoBrowser *)photoBrowser didDeselectAtIndex:(NSInteger)index;

@end

@interface JKPhotoBrowser : UIView

@property (nonatomic, weak) JKImagePickerController  *pickerController;
@property (nonatomic, weak) id<JKPhotoBrowserDelegate> delegate;

@property (nonatomic, strong) NSMutableArray      *assetsArray;

@property (nonatomic, assign) NSInteger    currentPage;


- (void)show:(BOOL)animated;
- (void)hide:(BOOL)animated;

@end
