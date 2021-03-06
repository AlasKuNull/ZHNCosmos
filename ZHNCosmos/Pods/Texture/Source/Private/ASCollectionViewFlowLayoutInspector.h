//
//  ASCollectionViewFlowLayoutInspector.h
//  Texture
//
//  Copyright (c) 2014-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under the BSD-style license found in the
//  LICENSE file in the /ASDK-Licenses directory of this source tree. An additional
//  grant of patent rights can be found in the PATENTS file in the same directory.
//
//  Modifications to this file made after 4/13/2017 are: Copyright (c) 2017-present,
//  Pinterest, Inc.  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//

#import <AsyncDisplayKit/ASCollectionViewLayoutInspector.h>

NS_ASSUME_NONNULL_BEGIN

@class ASCollectionView;
@class UICollectionViewFlowLayout;

/**
 * A layout inspector implementation specific for the sizing behavior of UICollectionViewFlowLayouts
 */
AS_SUBCLASSING_RESTRICTED
@interface ASCollectionViewFlowLayoutInspector : NSObject <ASCollectionViewLayoutInspecting>

@property (nonatomic, weak, readonly) UICollectionViewFlowLayout *layout;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithFlowLayout:(UICollectionViewFlowLayout *)flowLayout NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
