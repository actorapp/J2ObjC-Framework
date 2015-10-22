@version = "0.9.8.2.8"

Pod::Spec.new do |s|
  s.name         		= "J2ObjC-Framework"
  s.version      		= @version
  s.summary      		= "Frameworked version of J2ObjC"
  s.homepage        = "https://actor.im/"
  s.license         = { :type => 'MIT', :file => 'LICENSE' }
  s.author       		= { "Actor LLC" => "steve@actor.im" }
  s.source          = { :git => "https://github.com/actorapp/J2ObjC-Framework.git", :tag => "v#{s.version}" }

  s.platform     		= :ios, "8.0"
  s.requires_arc 		= true

  s.frameworks      = 'Security'
  s.libraries       = 'icucore', 'z'

  s.prepare_command = <<-CMD
      Scripts/download.sh
  CMD

  s.preserve_paths = ['Frameworks/j2objc.framework', 'Distributive']
  s.vendored_framework = 'Frameworks/j2objc.framework'
  
end
