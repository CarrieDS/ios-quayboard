//
// Copyright © 2013 Daniel Farrelly
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// *	Redistributions of source code must retain the above copyright notice, this list
//		of conditions and the following disclaimer.
// *	Redistributions in binary form must reproduce the above copyright notice, this
//		list of conditions and the following disclaimer in the documentation and/or
//		other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
// INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
// OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
// ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

#import <UIKit/UIKit.h>
#import "JSMQuayboardButton.h"

@class JSMQuayboardBar;

@protocol JSMQuayboardBarDelegate <NSObject>
@optional
- (void)quayboardBar:(JSMQuayboardBar *)quayboardBar keyWasPressed:(JSMQuayboardButton *)key;
@end

@interface JSMQuayboardBar : UIView {
	id <JSMQuayboardBarDelegate> delegate;
	NSArray *keys;
}

@property (nonatomic, strong) id <JSMQuayboardBarDelegate> delegate;
@property (nonatomic, strong) NSArray *keys;

- (JSMQuayboardButton *)addKeyWithValue:(NSString *)value;
- (JSMQuayboardButton *)addKeyWithTitle:(NSString *)title andValue:(NSString *)value;
- (void)addKey:(JSMQuayboardButton *)key;

+ (UIImage *)__JSMBundledImageNamed:(NSString*)name;

@end
