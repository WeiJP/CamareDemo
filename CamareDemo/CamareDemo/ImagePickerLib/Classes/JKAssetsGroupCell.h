//
//  JKAssetsGroupCell.h
//  JKImagePicker
//
//  Created by Jecky on 15/1/11.
//  Copyright (c) 2015年 Jecky. All rights reserved.
//


/**
 *  navigationbar点击之后展示有几组照片的 tableView的Cell
 */

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>

@interface JKAssetsGroupCell : UITableViewCell

@property (nonatomic, strong) ALAssetsGroup *assetsGroup;
@property (nonatomic, assign) BOOL   isSelected;

@end
