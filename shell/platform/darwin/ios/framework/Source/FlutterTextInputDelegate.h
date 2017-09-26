// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SHELL_PLATFORM_IOS_FRAMEWORK_SOURCE_FLUTTERTEXTINPUTDELEGATE_H_
#define SHELL_PLATFORM_IOS_FRAMEWORK_SOURCE_FLUTTERTEXTINPUTDELEGATE_H_

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, FlutterTextInputAction) {
  FlutterTextInputActionDone,
  FlutterTextInputActionNewline,
};

@protocol FlutterTextInputDelegate<NSObject>

- (void)updateEditingClient:(int)client withState:(NSDictionary*)state;
- (void)performAction:(FlutterTextInputAction)action withClient:(int)client;

@end

#endif  // SHELL_PLATFORM_IOS_FRAMEWORK_SOURCE_FLUTTERTEXTINPUTDELEGATE_H_
