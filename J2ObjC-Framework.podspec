@version = "1.2.2"

Pod::Spec.new do |s|
  s.name         		= "J2ObjC-Framework"
  s.version      		= @version
  s.summary      		= "Frameworked version of J2ObjC"
  s.homepage        = "https://actor.im/"
  s.license         = { :type => 'MIT', :file => 'LICENSE' }
  s.author       		= { "Actor LLC" => "steve@actor.im" }
  s.source          = { :git => "https://github.com/dfsilva/J2ObjC-Framework.git", :tag => "v#{s.version}" }

  s.ios.deployment_target = "8.0"
  s.osx.deployment_target = "10.11"
  s.requires_arc 		= true

  s.frameworks      = 'Security'
  s.libraries       = 'icucore', 'z'

  s.prepare_command = <<-CMD
      Scripts/download.sh
  CMD

  s.preserve_paths = ['Frameworks/j2objc.framework', 'Distributive', 'install.sh']
  s.xcconfig = { 'FRAMEWORK_SEARCH_PATHS' => '"$(PODS_ROOT)/J2ObjC-Framework/Frameworks"' }  
  
end
