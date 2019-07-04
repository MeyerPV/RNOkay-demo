Pod::Spec.new do |spec|
  spec.name         = 'PSA'
  spec.version      = '1.0.3'
  spec.license      = { :type => 'Apache 2.0', :file => 'LICENSE' }
  spec.homepage     = 'https://okaythis.com'
  spec.author       = { 'Okay This' => 'hello@okaythis.com' }
  spec.summary      = 'SDK for confirm actions'
  spec.source       = { :http => 'https://github.com/Okaythis/PSACommonIOS/raw/master/PSA.zip' }
  spec.ios.deployment_target = '10.0'
  spec.ios.vendored_frameworks = 'PSA.framework'
  spec.dependency 'PSACommon', '~> 1.0.3'
end